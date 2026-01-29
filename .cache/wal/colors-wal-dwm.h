static const char norm_fg[] = "#e4e1e3";
static const char norm_bg[] = "#101315";
static const char norm_border[] = "#9f9d9e";

static const char sel_fg[] = "#e4e1e3";
static const char sel_bg[] = "#8EABB7";
static const char sel_border[] = "#e4e1e3";

static const char urg_fg[] = "#e4e1e3";
static const char urg_bg[] = "#A39CA2";
static const char urg_border[] = "#A39CA2";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
