static const char norm_fg[] = "#c9d9e5";
static const char norm_bg[] = "#090306";
static const char norm_border[] = "#8c97a0";

static const char sel_fg[] = "#c9d9e5";
static const char sel_bg[] = "#BB7784";
static const char sel_border[] = "#c9d9e5";

static const char urg_fg[] = "#c9d9e5";
static const char urg_bg[] = "#2D67A1";
static const char urg_border[] = "#2D67A1";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
