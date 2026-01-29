const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#101315", /* black   */
  [1] = "#A39CA2", /* red     */
  [2] = "#8EABB7", /* green   */
  [3] = "#D1AFB0", /* yellow  */
  [4] = "#A0B7C4", /* blue    */
  [5] = "#D2BFC1", /* magenta */
  [6] = "#AFC6D0", /* cyan    */
  [7] = "#e4e1e3", /* white   */

  /* 8 bright colors */
  [8]  = "#9f9d9e",  /* black   */
  [9]  = "#A39CA2",  /* red     */
  [10] = "#8EABB7", /* green   */
  [11] = "#D1AFB0", /* yellow  */
  [12] = "#A0B7C4", /* blue    */
  [13] = "#D2BFC1", /* magenta */
  [14] = "#AFC6D0", /* cyan    */
  [15] = "#e4e1e3", /* white   */

  /* special colors */
  [256] = "#101315", /* background */
  [257] = "#e4e1e3", /* foreground */
  [258] = "#e4e1e3",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
