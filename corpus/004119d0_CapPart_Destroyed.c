
/* clears root +0x138 bit (8 weapon gen -> turrets off, 0x10 shield gen); last TYPE 9 power gen
   clears 0x100 (engines) */

void CapPart_Destroyed(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 0xdc);
  if (iVar2 != 0) {
    uVar4 = *(uint *)(*(int *)(param_1 + 0xe4) + 0x34) & 0x118;
    if ((char)(uVar4 >> 8) == '\0') {
      *(uint *)(iVar2 + 0x138) = *(uint *)(iVar2 + 0x138) & ~uVar4;
    }
    else {
      piVar1 = (int *)(iVar2 + 0x140);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(uint *)(iVar2 + 0x138) = *(uint *)(iVar2 + 0x138) & 0xfffffeff;
        uVar3 = FUN_00434830(param_1,*(int *)(iVar2 + 0xd8),
                             *(undefined4 *)(*(int *)(iVar2 + 0xd8) + 0x5c),1);
        FUN_004346d0(uVar3);
      }
    }
  }
  SrvSend_EntityDestroyed(param_1 + 0x34,3,0,0,0,0,0,*(undefined4 *)(param_1 + 100));
  FUN_0048b330(param_1);
  FUN_0048b140(param_1);
  FUN_00410b30(param_1);
  FUN_0041b8c0(param_1);
  SrvSend_Despawn(param_1);
  FUN_0045d1c0(param_1,*(int *)(param_1 + 100) + 0x14);
  FUN_0045cf80(param_1,*(int *)(param_1 + 100) + 0x14);
  FUN_00492ba0(param_1,*(undefined4 *)(param_1 + 100));
  return;
}

