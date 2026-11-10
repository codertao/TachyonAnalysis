
void FUN_00405280(int param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  vec3 vStack_c;
  
  iVar1 = *(int *)(param_1 + 0x90);
  *(undefined1 *)(param_1 + 0x327) = 0;
  *(undefined1 *)(param_1 + 0x326) = 0;
  if (((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0xf) == 0) {
    *(undefined2 *)(param_1 + 0x312) = 0x400;
    pcVar2 = *(code **)(*(int *)(iVar1 + 0x8c) + 0x58);
    if (pcVar2 == (code *)0x0) {
      vStack_c.x = *(int *)(iVar1 + 0x34);
      vStack_c.y = *(int *)(iVar1 + 0x38);
      vStack_c.z = *(int *)(iVar1 + 0x3c);
    }
    else {
      (*pcVar2)(iVar1,2,&vStack_c);
    }
    vStack_c.y = vStack_c.y + 0xc8000;
    uVar3 = distance_between((vec3 *)(param_1 + 0x34),&vStack_c);
    if (uVar3 < 0x12c000) {
      Ai_SetState(param_1,9);
    }
    *(ushort *)(param_1 + 0x312) = (-(ushort)(uVar3 < 0xbb8000) & 0xfd00) + 0x400;
    FUN_0040f380((vec3 *)(param_1 + 0x34),&vStack_c,param_1 + 0xdc);
  }
  return;
}

