#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
    char site[50];
    char username[50];
    char password[50];
} PasswordEntry;

#define MAX_PASSWORDS 100
PasswordEntry passwordList[MAX_PASSWORDS];
int passwordCount = 0;

// Helper function to generate random passwords
void generate_random_password(char *password, int length) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
    srand(time(NULL));
    for (int i = 0; i < length; i++) {
        password[i] = charset[rand() % (sizeof(charset) - 1)];
    }
    password[length] = '\0';
}

// Callback for adding a password
void add_password(GtkWidget *widget, gpointer data) {
    GtkEntry **entries = (GtkEntry **)data;
    const char *site = gtk_entry_get_text(entries[0]);
    const char *username = gtk_entry_get_text(entries[1]);
    const char *password = gtk_entry_get_text(entries[2]);

    if (passwordCount < MAX_PASSWORDS) {
        strcpy(passwordList[passwordCount].site, site);
        strcpy(passwordList[passwordCount].username, username);
        strcpy(passwordList[passwordCount].password, password);
        passwordCount++;

        GtkWidget *dialog = gtk_message_dialog_new(NULL, GTK_DIALOG_DESTROY_WITH_PARENT, GTK_MESSAGE_INFO, GTK_BUTTONS_OK, "Password added successfully!");
        gtk_dialog_run(GTK_DIALOG(dialog));
        gtk_widget_destroy(dialog);
    } else {
        GtkWidget *dialog = gtk_message_dialog_new(NULL, GTK_DIALOG_DESTROY_WITH_PARENT, GTK_MESSAGE_ERROR, GTK_BUTTONS_OK, "Password list is full!");
        gtk_dialog_run(GTK_DIALOG(dialog));
        gtk_widget_destroy(dialog);
    }
}

// Callback for displaying passwords
void show_passwords(GtkWidget *widget, gpointer data) {
    GtkTextBuffer *buffer = (GtkTextBuffer *)data;
    gtk_text_buffer_set_text(buffer, "", -1);

    for (int i = 0; i < passwordCount; i++) {
        char entry[200];
        sprintf(entry, "Site: %s\nUsername: %s\nPassword: %s\n\n", passwordList[i].site, passwordList[i].username, passwordList[i].password);
        gtk_text_buffer_insert_at_cursor(buffer, entry, -1);
    }
}

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    // Main Window
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Password Manager");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 300);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Layout
    GtkWidget *grid = gtk_grid_new();
    gtk_container_add(GTK_CONTAINER(window), grid);

    // Entry fields
    GtkWidget *siteLabel = gtk_label_new("Site:");
    GtkWidget *siteEntry = gtk_entry_new();
    GtkWidget *usernameLabel = gtk_label_new("Username:");
    GtkWidget *usernameEntry = gtk_entry_new();
    GtkWidget *passwordLabel = gtk_label_new("Password:");
    GtkWidget *passwordEntry = gtk_entry_new();

    gtk_grid_attach(GTK_GRID(grid), siteLabel, 0, 0, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), siteEntry, 1, 0, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), usernameLabel, 0, 1, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), usernameEntry, 1, 1, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), passwordLabel, 0, 2, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), passwordEntry, 1, 2, 1, 1);

    GtkEntry *entries[3] = {GTK_ENTRY(siteEntry), GTK_ENTRY(usernameEntry), GTK_ENTRY(passwordEntry)};

    // Buttons
    GtkWidget *addButton = gtk_button_new_with_label("Add Password");
    GtkWidget *showButton = gtk_button_new_with_label("Show Passwords");
    gtk_grid_attach(GTK_GRID(grid), addButton, 0, 3, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), showButton, 1, 3, 1, 1);

    // Text View for displaying passwords
    GtkWidget *textView = gtk_text_view_new();
    GtkTextBuffer *buffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(textView));
    gtk_text_view_set_editable(GTK_TEXT_VIEW(textView), FALSE);
    GtkWidget *scrollWindow = gtk_scrolled_window_new(NULL, NULL);
    gtk_container_add(GTK_CONTAINER(scrollWindow), textView);
    gtk_grid_attach(GTK_GRID(grid), scrollWindow, 0, 4, 2, 1);

    // Connect callbacks
    g_signal_connect(addButton, "clicked", G_CALLBACK(add_password), entries);
    g_signal_connect(showButton, "clicked", G_CALLBACK(show_passwords), buffer);

    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}