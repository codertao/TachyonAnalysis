
/* sweep */

void Input_PushKey(undefined1 param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_00603e2c == 0) {
    iVar1 = GLBL_someinput_MAX_CNT * 4;
    DAT_00603e28 = &GLBL_someinput_array_of_ints + iVar1;
    GLBL_someinput_MAX_CNT = GLBL_someinput_MAX_CNT + 1 & 0x7f;
    *DAT_00603e28 = param_1;
    (&DAT_00603c21)[iVar1] = 0;
    *(undefined2 *)(&DAT_00603c22 + iVar1) = 0;
    if (DAT_00603a31 != '\0') {
      *(undefined2 *)(&DAT_00603c22 + iVar1) = 0x800;
    }
    if (DAT_00603a30 != '\0') {
      *(short *)(&DAT_00603c22 + iVar1) = *(short *)(&DAT_00603c22 + iVar1) + 0x200;
    }
    if ((param_2 & 0x1000000) != 0) {
      *(short *)(&DAT_00603c22 + iVar1) = *(short *)(&DAT_00603c22 + iVar1) + 0x100;
    }
  }
  return;
}

