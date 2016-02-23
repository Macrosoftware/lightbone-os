class Window
{
    private:
        short x;
        short y;
        short cx;
        short cy;
        char * caption;
        Edit * edit_cmps;
        Button * button_cmps;
        CheckBox * checkbox_cmps;
        RadioBox * radiobox_cmps;
        List * list_cmps;
        Window * parentwnd;
        char cornersch[4];
        char captionlinechar;
        char linesupchar;
    public:
};
