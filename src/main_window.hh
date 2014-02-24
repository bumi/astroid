# pragma once

# include <gtkmm.h>
# include <gtkmm/window.h>

# include "proto.hh"

using namespace std;

namespace Astroid {
  class Notebook : public Gtk::Notebook {

  };

  class MainWindow : public Gtk::Window {
    public:
      MainWindow ();
      ~MainWindow ();

      bool on_key_press (GdkEventKey *);

      Notebook notebook;

      vector<Mode*> modes; 
      int current = -1;

      void add_mode (Mode *);
      void del_mode (int);

      void set_active (int);

  };

}
