
/* sweep */

void Map_OnBack(void)

{
  if (DAT_00571340 == 0) {
    Map_ZoomOut();
    return;
  }
  FlightMap_Resume();
  return;
}

