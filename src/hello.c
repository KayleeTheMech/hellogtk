#include <stdio.h>
#include <gtk/gtk.h>
#include "config.h"

gint main(gint argc,
		  gchar *argv[])
{

	printf(PACKAGE_STRING, "\n");
	GtkWidget *window = NULL;
	gtk_init(&argc, &argv);
	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_widget_set_size_request(window, 400, 300);
	gtk_container_set_border_width(GTK_CONTAINER(window), 10);
	g_signal_connect(G_OBJECT(window), "delete_event",
					 G_CALLBACK(gtk_main_quit), NULL);
	gtk_widget_show(window);
	gtk_main();
	return 0;
}
