
/* sweep */

void Scene_DrawTexts(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x98) != 0) {
    do {
      if (((piVar1[0xb] != 0) && (piVar1[0xe] != 0)) && (piVar1[0xd] == 1)) {
        Gfx_Lock(1);
        Text_DrawAligned(*(undefined4 *)piVar1[0xe],piVar1[0xb],piVar1[1] >> 0x10,piVar1[2] >> 0x10,
                         piVar1[0xc],piVar1[3],piVar1[4],*(undefined4 *)(*piVar1 + 0x2c));
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 0xf;
    } while (uVar2 < *(uint *)(param_1 + 0x98));
  }
  return;
}

