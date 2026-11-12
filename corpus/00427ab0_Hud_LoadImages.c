
/* sweep */

void Hud_LoadImages(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  Hud_LoadPalette();
  iVar2 = *param_1;
  while (iVar2 != 0) {
    Hud_LoadImage(param_1[3],iVar2,param_1[1],param_1[2],param_1[4]);
    piVar1 = param_1 + 5;
    param_1 = param_1 + 5;
    iVar2 = *piVar1;
  }
  return;
}

