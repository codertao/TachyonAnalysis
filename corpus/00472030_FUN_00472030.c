
void FUN_00472030(undefined4 param_1,int param_2)

{
  FUN_00471de0();
  FUN_0043f620(&DAT_00583420,s_IACFGDrag_0054765c,0x20000);
  FUN_0043e610(&DAT_00583420,s_TxtCFGDragQty_0054764c,0x10000);
  FUN_0043e6a0(&DAT_00583420,s_TxtCFGDragQty_0054764c,&DAT_00562b14);
  *(int *)(DAT_00563608 + 0xd4) = param_2;
  if (param_2 != 0) {
    FUN_0043f840(&DAT_00583420,s_IACFGDrag_0054765c,0x20000);
    FUN_0043e670(&DAT_00583420,s_TxtCFGDragQty_0054764c,0x10000);
    FUN_0043e6a0(&DAT_00583420,s_TxtCFGDragQty_0054764c,&DAT_00577f60);
    DAT_00577f60 = 0;
    DAT_0056360c = 1;
    FUN_0048e3d0(&DAT_00577f70,
                 (*(int *)(param_2 + 0x166c) + 0x18) * *(int *)(param_2 + 0x1670) * DAT_00604488,4,
                 s_drag_scratch_ptr_00547668,0xa100);
    FUN_00472140(DAT_00603e40,DAT_00603e44);
  }
  Ui_RefreshWindow(&DAT_00583420,param_1,0,0);
  return;
}

