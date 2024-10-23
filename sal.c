#include <gtk/gtk.h>

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    // Create a window
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Hello, World!");
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);

    // Show the window
    gtk_widget_show(window);

    // Start the event loop
    gtk_main();

    return 0;
}