#include <gtk/gtk.h>
#include <webkit2/webkit2.h>

int main(int argc, char *argv[]) {
    // Inicializar GTK
    gtk_init(&argc, &argv);

    // Crear la ventana principal
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "MyAnimeList WebView");
    gtk_window_set_default_size(GTK_WINDOW(window), 800, 600);
    gtk_container_set_border_width(GTK_CONTAINER(window), 0);

    // Crear el WebView
    GtkWidget *webview = webkit_web_view_new();

    // Agregar el WebView a la ventana
    gtk_container_add(GTK_CONTAINER(window), webview);

    // Cargar la página de MyAnimeList
    webkit_web_view_load_uri(WEBKIT_WEB_VIEW(webview), "https://myanimelist.net");

    // Mostrar todos los componentes
    gtk_widget_show_all(window);

    // Iniciar el bucle principal de GTK
    gtk_main();

    return 0;
}
