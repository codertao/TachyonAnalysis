
/* (x, y) move drag image, clamped to screen */

void Loadout_UpdateDragCursor(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (DAT_00563608 != 0) {
    iVar2 = *(int *)(DAT_00563608 + 0xd4);
    iVar3 = *(int *)(iVar2 + 0x166c);
    iVar1 = *(int *)(iVar2 + 0x1670);
    param_1 = param_1 - (iVar3 >> 1);
    param_2 = param_2 - (iVar1 >> 1);
    if (iVar2 != 0) {
      if (0x27f < iVar3 + 0x18 + param_1) {
        param_1 = 0x267 - iVar3;
      }
      if (iVar2 != 0) {
        iVar2 = *(int *)(iVar2 + 0x1680);
        iVar3 = iVar2;
        if (iVar2 == 0) {
          iVar3 = 1;
        }
        if (0x1df < iVar1 / iVar3 + param_2) {
          if (iVar2 == 0) {
            iVar2 = 1;
          }
          param_2 = 0x1df - iVar1 / iVar2;
        }
      }
    }
    ImageArea_StepFrame(&GLBL_UI_ELEM_LIST,s_IACFGDrag_0054765c,param_1,param_2);
    local_10 = *(int *)(*(int *)(DAT_00563608 + 0xd4) + 0x166c) + 4 + param_1;
    local_8 = local_10 + 1;
    local_c = *(int *)(*(int *)(DAT_00563608 + 0xd4) + 0x1670) / 2 + -4 + param_2;
    local_4 = local_c + 1;
    Ui_SetLabelColor(&GLBL_UI_ELEM_LIST,s_TxtCFGDragQty_0054764c,&local_10);
    if (g_LoadoutDragItem != 0) {
      str_sprintf(&DAT_00577f60,&DAT_00535eb8,*(undefined4 *)(g_LoadoutDragItem + 0x54));
    }
  }
  return;
}

