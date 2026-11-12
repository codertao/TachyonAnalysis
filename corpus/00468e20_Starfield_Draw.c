
/* sweep */

void Starfield_Draw(void)

{
  if (GLBL_spacesav[0x2c] != 0) {
    Starfield_DrawStreaks();
    return;
  }
  Starfield_DrawPoints();
  return;
}

