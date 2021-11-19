/*_                                */ 
/*| |__ __ __ _   _ _ __   ___     */
/*| '_ \| '__| | | | '_ \ / _ \    Bruno Montezano */
/*| |_) | |  | |_| | | | | (_) |   https://github.com/brunomontezano */
/*|_.__/|_|   \__,_|_| |_|\___/    Feel free to copy and modify it */

/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 600;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "FiraMono Nerd Font:pixelsize=11:antialias=true:autohint=true",
	"Hack:pixelsize=11:antialias=true:autohint=true",
	"JoyPixels:pixelsize=8:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p option; prompt to the left of input field */

/*static const char tn_fg[]         = "#1d2021";
static const char tn_bg[]         = "#83a598";
static const char tn_blue[]       = "#1d2021";
static const char tn_grey[]       = "#282828";
static const char tn_yellow[]     = "#427b58";
static const char tn_white[]      = "#427b58";*/

static const char tn_fg[]         = "#fbf1c7";
static const char tn_bg[]         = "#3c3836";
static const char tn_blue[]       = "#fbf1c7";
static const char tn_grey[]       = "#d5c4a1";
static const char tn_yellow[]     = "#d65d0e";
static const char tn_white[]      = "#d65d0e";

/*static const char tn_fg[]         = "#1d2021";
static const char tn_bg[]         = "#a9b1d6";
static const char tn_blue[]       = "#1d2021";
static const char tn_grey[]       = "#c0caf5";
static const char tn_yellow[]     = "#414868";
static const char tn_white[]      = "#414868";*/

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { tn_fg, tn_bg   },
	[SchemeSel] =  { tn_bg, tn_blue },
	[SchemeMid] = { tn_white, tn_grey },
	[SchemeOut] =  { tn_fg, tn_bg   },
    [SchemeSelHighlight] = { tn_yellow, tn_bg },
	[SchemeNormHighlight] = { tn_yellow, tn_grey },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 25;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;  /* -bw option; to add border width */
