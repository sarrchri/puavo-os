typedef	GtkWidget *(*GDoDemoFunc) (GtkWidget *do_widget);

typedef struct _Demo Demo;

struct _Demo 
{
  gchar *name;
  gchar *title;
  gchar *filename;
  GDoDemoFunc func;
  Demo *children;
};

GtkWidget *do_application_demo (GtkWidget *do_widget);
GtkWidget *do_assistant (GtkWidget *do_widget);
GtkWidget *do_builder (GtkWidget *do_widget);
GtkWidget *do_button_box (GtkWidget *do_widget);
GtkWidget *do_changedisplay (GtkWidget *do_widget);
GtkWidget *do_clipboard (GtkWidget *do_widget);
GtkWidget *do_colorsel (GtkWidget *do_widget);
GtkWidget *do_combobox (GtkWidget *do_widget);
GtkWidget *do_css_accordion (GtkWidget *do_widget);
GtkWidget *do_css_basics (GtkWidget *do_widget);
GtkWidget *do_css_blendmodes (GtkWidget *do_widget);
GtkWidget *do_css_multiplebgs (GtkWidget *do_widget);
GtkWidget *do_css_pixbufs (GtkWidget *do_widget);
GtkWidget *do_css_shadows (GtkWidget *do_widget);
GtkWidget *do_cursors (GtkWidget *do_widget);
GtkWidget *do_dialog (GtkWidget *do_widget);
GtkWidget *do_drawingarea (GtkWidget *do_widget);
GtkWidget *do_editable_cells (GtkWidget *do_widget);
GtkWidget *do_entry_buffer (GtkWidget *do_widget);
GtkWidget *do_entry_completion (GtkWidget *do_widget);
GtkWidget *do_event_axes (GtkWidget *do_widget);
GtkWidget *do_expander (GtkWidget *do_widget);
GtkWidget *do_filtermodel (GtkWidget *do_widget);
GtkWidget *do_fishbowl (GtkWidget *do_widget);
GtkWidget *do_foreigndrawing (GtkWidget *do_widget);
GtkWidget *do_gestures (GtkWidget *do_widget);
GtkWidget *do_glarea (GtkWidget *do_widget);
GtkWidget *do_headerbar (GtkWidget *do_widget);
GtkWidget *do_hypertext (GtkWidget *do_widget);
GtkWidget *do_iconview (GtkWidget *do_widget);
GtkWidget *do_iconview_edit (GtkWidget *do_widget);
GtkWidget *do_images (GtkWidget *do_widget);
GtkWidget *do_infobar (GtkWidget *do_widget);
GtkWidget *do_links (GtkWidget *do_widget);
GtkWidget *do_listbox (GtkWidget *do_widget);
GtkWidget *do_flowbox (GtkWidget *do_widget);
GtkWidget *do_list_store (GtkWidget *do_widget);
GtkWidget *do_markup (GtkWidget *do_widget);
GtkWidget *do_menus (GtkWidget *do_widget);
GtkWidget *do_modelbutton (GtkWidget *do_widget);
GtkWidget *do_offscreen_window (GtkWidget *do_widget);
GtkWidget *do_offscreen_window2 (GtkWidget *do_widget);
GtkWidget *do_overlay (GtkWidget *do_widget);
GtkWidget *do_overlay2 (GtkWidget *do_widget);
GtkWidget *do_paint (GtkWidget *do_widget);
GtkWidget *do_panes (GtkWidget *do_widget);
GtkWidget *do_pickers (GtkWidget *do_widget);
GtkWidget *do_pixbufs (GtkWidget *do_widget);
GtkWidget *do_popover (GtkWidget *do_widget);
GtkWidget *do_printing (GtkWidget *do_widget);
GtkWidget *do_revealer (GtkWidget *do_widget);
GtkWidget *do_rotated_text (GtkWidget *do_widget);
GtkWidget *do_scale (GtkWidget *do_widget);
GtkWidget *do_search_entry (GtkWidget *do_widget);
GtkWidget *do_search_entry2 (GtkWidget *do_widget);
GtkWidget *do_shortcuts (GtkWidget *do_widget);
GtkWidget *do_sidebar (GtkWidget *do_widget);
GtkWidget *do_sizegroup (GtkWidget *do_widget);
GtkWidget *do_spinbutton (GtkWidget *do_widget);
GtkWidget *do_spinner (GtkWidget *do_widget);
GtkWidget *do_stack (GtkWidget *do_widget);
GtkWidget *do_tabs (GtkWidget *do_widget);
GtkWidget *do_textmask (GtkWidget *do_widget);
GtkWidget *do_textview (GtkWidget *do_widget);
GtkWidget *do_textscroll (GtkWidget *do_widget);
GtkWidget *do_theming_style_classes (GtkWidget *do_widget);
GtkWidget *do_toolpalette (GtkWidget *do_widget);
GtkWidget *do_transparent (GtkWidget *do_widget);
GtkWidget *do_tree_store (GtkWidget *do_widget);
GtkWidget *do_font_features (GtkWidget *do_widget);
GtkWidget *do_pagesetup (GtkWidget *do_widget);

Demo child0[] = {
  { "css_accordion", "CSS Accordion", "css_accordion.c", do_css_accordion, NULL },
  { "css_basics", "CSS Basics", "css_basics.c", do_css_basics, NULL },
  { "css_blendmodes", "CSS Blend Modes", "css_blendmodes.c", do_css_blendmodes, NULL },
  { "css_multiplebgs", "Multiple Backgrounds", "css_multiplebgs.c", do_css_multiplebgs, NULL },
  { "css_pixbufs", "Animated Backgrounds", "css_pixbufs.c", do_css_pixbufs, NULL },
  { "css_shadows", "Shadows", "css_shadows.c", do_css_shadows, NULL },
  { "theming_style_classes", "Style Classes", "theming_style_classes.c", do_theming_style_classes, NULL },
  { NULL } 
};

Demo child1[] = {
  { "editable_cells", "Editable Cells", "editable_cells.c", do_editable_cells, NULL },
  { "filtermodel", "Filter Model", "filtermodel.c", do_filtermodel, NULL },
  { "list_store", "List Store", "list_store.c", do_list_store, NULL },
  { "tree_store", "Tree Store", "tree_store.c", do_tree_store, NULL },
  { NULL } 
};

Demo child2[] = {
  { "entry_buffer", "Entry Buffer", "entry_buffer.c", do_entry_buffer, NULL },
  { "entry_completion", "Entry Completion", "entry_completion.c", do_entry_completion, NULL },
  { "search_entry", "Search Entry", "search_entry.c", do_search_entry, NULL },
  { "search_entry2", "Delayed Search Entry", "search_entry2.c", do_search_entry2, NULL },
  { NULL } 
};

Demo child3[] = {
  { "fishbowl", "Fishbowl", "fishbowl.c", do_fishbowl, NULL },
  { NULL } 
};

Demo child4[] = {
  { "hypertext", "Hypertext", "hypertext.c", do_hypertext, NULL },
  { "markup", "Markup", "markup.c", do_markup, NULL },
  { "tabs", "Tabs", "tabs.c", do_tabs, NULL },
  { "textview", "Multiple Views", "textview.c", do_textview, NULL },
  { "textscroll", "Automatic Scrolling", "textscroll.c", do_textscroll, NULL },
  { NULL } 
};

Demo child5[] = {
  { "iconview", "Icon View Basics", "iconview.c", do_iconview, NULL },
  { "iconview_edit", "Editing and Drag-and-Drop", "iconview_edit.c", do_iconview_edit, NULL },
  { NULL } 
};

Demo child6[] = {
  { "offscreen_window", "Rotated Button", "offscreen_window.c", do_offscreen_window, NULL },
  { "offscreen_window2", "Effects", "offscreen_window2.c", do_offscreen_window2, NULL },
  { NULL } 
};

Demo child7[] = {
  { "overlay", "Interactive Overlay", "overlay.c", do_overlay, NULL },
  { "overlay2", "Decorative Overlay", "overlay2.c", do_overlay2, NULL },
  { "transparent", "Transparency", "transparent.c", do_transparent, NULL },
  { NULL } 
};

Demo child8[] = {
  { "printing", "Printing", "printing.c", do_printing, NULL },
  { "pagesetup", "Page Setup", "pagesetup.c", do_pagesetup, NULL },
  { NULL } 
};

Demo child9[] = {
  { "rotated_text", "Rotated Text", "rotated_text.c", do_rotated_text, NULL },
  { "textmask", "Text Mask", "textmask.c", do_textmask, NULL },
  { "font_features", "Font Features", "font_features.c", do_font_features, NULL },
  { NULL } 
};

Demo gtk_demos[] = {
  { "application_demo", "Application Class", "application_demo.c", do_application_demo, NULL }, 
  { "assistant", "Assistant", "assistant.c", do_assistant, NULL }, 
  { NULL, "Benchmark", NULL, NULL, child3 }, 
  { "builder", "Builder", "builder.c", do_builder, NULL }, 
  { "button_box", "Button Boxes", "button_box.c", do_button_box, NULL }, 
  { "changedisplay", "Change Display", "changedisplay.c", do_changedisplay, NULL }, 
  { "clipboard", "Clipboard", "clipboard.c", do_clipboard, NULL }, 
  { "colorsel", "Color Chooser", "colorsel.c", do_colorsel, NULL }, 
  { "combobox", "Combo Boxes", "combobox.c", do_combobox, NULL }, 
  { "cursors", "Cursors", "cursors.c", do_cursors, NULL }, 
  { "dialog", "Dialogs and Message Boxes", "dialog.c", do_dialog, NULL }, 
  { "drawingarea", "Drawing Area", "drawingarea.c", do_drawingarea, NULL }, 
  { NULL, "Entry", NULL, NULL, child2 }, 
  { "expander", "Expander", "expander.c", do_expander, NULL }, 
  { "flowbox", "Flow Box", "flowbox.c", do_flowbox, NULL }, 
  { "foreigndrawing", "Foreign drawing", "foreigndrawing.c", do_foreigndrawing, NULL }, 
  { "gestures", "Gestures", "gestures.c", do_gestures, NULL }, 
  { "headerbar", "Header Bar", "headerbar.c", do_headerbar, NULL }, 
  { NULL, "Icon View", NULL, NULL, child5 }, 
  { "images", "Images", "images.c", do_images, NULL }, 
  { "infobar", "Info Bars", "infobar.c", do_infobar, NULL }, 
  { "links", "Links", "links.c", do_links, NULL }, 
  { "listbox", "List Box", "listbox.c", do_listbox, NULL }, 
  { "menus", "Menus", "menus.c", do_menus, NULL }, 
  { "modelbutton", "Model Button", "modelbutton.c", do_modelbutton, NULL }, 
  { NULL, "Offscreen Windows", NULL, NULL, child6 }, 
  { "glarea", "OpenGL Area", "glarea.c", do_glarea, NULL }, 
  { NULL, "Overlay", NULL, NULL, child7 }, 
  { "paint", "Paint", "paint.c", do_paint, NULL }, 
  { "panes", "Paned Widgets", "panes.c", do_panes, NULL }, 
  { NULL, "Pango", NULL, NULL, child9 }, 
  { "pickers", "Pickers", "pickers.c", do_pickers, NULL }, 
  { "pixbufs", "Pixbufs", "pixbufs.c", do_pixbufs, NULL }, 
  { "popover", "Popovers", "popover.c", do_popover, NULL }, 
  { NULL, "Printing", NULL, NULL, child8 }, 
  { "revealer", "Revealer", "revealer.c", do_revealer, NULL }, 
  { "scale", "Scale", "scale.c", do_scale, NULL }, 
  { "shortcuts", "Shortcuts Window", "shortcuts.c", do_shortcuts, NULL }, 
  { "sizegroup", "Size Groups", "sizegroup.c", do_sizegroup, NULL }, 
  { "spinbutton", "Spin Button", "spinbutton.c", do_spinbutton, NULL }, 
  { "spinner", "Spinner", "spinner.c", do_spinner, NULL }, 
  { "stack", "Stack", "stack.c", do_stack, NULL }, 
  { "sidebar", "Stack Sidebar", "sidebar.c", do_sidebar, NULL }, 
  { NULL, "Text View", NULL, NULL, child4 }, 
  { NULL, "Theming", NULL, NULL, child0 }, 
  { "toolpalette", "Tool Palette", "toolpalette.c", do_toolpalette, NULL }, 
  { "event_axes", "Touch and Drawing Tablets", "event_axes.c", do_event_axes, NULL }, 
  { NULL, "Tree View", NULL, NULL, child1 },
  { NULL } 
};
