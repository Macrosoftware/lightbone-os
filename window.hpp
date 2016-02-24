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
            if (_x < 30 && _x > 0)
                x = _x;
            if (_y < 30 && _y > 0)
                y = _y;
            if ((_x + _cx) > 0 && (_x+ _cx) < 30)
                cx = _cx;
            if ((_y + _cy) > 0 && (_y + _cy) < 30)
                cy = _cy;
            free(caption);
            if (caption)
            {
                caption = (char *) malloc(strlen(_caption) + 1);
                caption = _caption;
            }
            else
                caption = NULL;
        }
        for (int licz = 0; licz < 4; licz++)
        {
            cornersch[licz] = _cornersch[licz];
        }
        linesupchar = _linesupchar;
        captionlinechar = _captionlinechar;
};
