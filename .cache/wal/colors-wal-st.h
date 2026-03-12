const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#090306", /* black   */
  [1] = "#2D67A1", /* red     */
  [2] = "#BB7784", /* green   */
  [3] = "#0DAFD9", /* yellow  */
  [4] = "#57A9D2", /* blue    */
  [5] = "#FBAB9C", /* magenta */
  [6] = "#FDD493", /* cyan    */
  [7] = "#c9d9e5", /* white   */

  /* 8 bright colors */
  [8]  = "#8c97a0",  /* black   */
  [9]  = "#2D67A1",  /* red     */
  [10] = "#BB7784", /* green   */
  [11] = "#0DAFD9", /* yellow  */
  [12] = "#57A9D2", /* blue    */
  [13] = "#FBAB9C", /* magenta */
  [14] = "#FDD493", /* cyan    */
  [15] = "#c9d9e5", /* white   */

  /* special colors */
  [256] = "#090306", /* background */
  [257] = "#c9d9e5", /* foreground */
  [258] = "#c9d9e5",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
