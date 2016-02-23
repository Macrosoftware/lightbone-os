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
        void operator()(short _x, short _y, short _cx, short _cy, char * _caption, Window * _parentwnd, char * _cornersch, char _captionlinechar, char _linesupchar)
        {
            if (x < 30 && x > 0)
                x = _x;
        }
};
