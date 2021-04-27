/*_                                */ 
/*| |__ __ __ _   _ _ __   ___     */
/*| '_ \| '__| | | | '_ \ / _ \    Bruno Montezano */
/*| |_) | |  | |_| | | | | (_) |   https://github.com/brunomontezano */
/*|_.__/|_|   \__,_|_| |_|\___/    Feel free to copy and modify it */

/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 600;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "Fantasque Sans Mono:pixelsize=11:antialias=true:autohint=true",
	"Hack:pixelsize=11:antialias=true:autohint=true",
	"JoyPixels:pixelsize=8:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p option; prompt to the left of input field */

static const char nord_fg[]         = "#D8DEE9";
static const char nord_bg[]         = "#4C566A";
static const char nord_blue[]       = "#81A1C1";
static const char nord_grey[]       = "#3B4252";
static const char nord_yellow[]     = "#EBCB8B";
static const char nord_white[]      = "#E5E9F0";

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { nord_fg, nord_bg   },
	[SchemeSel] =  { nord_bg, nord_blue },
	[SchemeMid] = { nord_white, nord_grey },
	[SchemeOut] =  { nord_fg, nord_bg   },
    [SchemeSelHighlight] = { nord_yellow, nord_bg },
	[SchemeNormHighlight] = { nord_yellow, nord_grey },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 22;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;  /* -bw option; to add border width */
