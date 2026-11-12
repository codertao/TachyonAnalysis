
/* sweep */

void SbNews_OnItemBtn(int param_1)

{
  if ((-1 < param_1) && (param_1 < 4)) {
    SbNews_SelectItem(param_1);
  }
  return;
}

