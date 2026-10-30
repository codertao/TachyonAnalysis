
void FUN_0040aa20(uint param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uStack_8;
  
  iVar3 = param_1;
  iVar1 = *(int *)(param_1 + 0x8c);
  puVar2 = *(uint **)(iVar1 + 0x94);
  DAT_005b9810 = param_1;
  FUN_0040a900(param_1,puVar2);
  param_1 = FUN_0040a9f0(param_1);
  if (param_1 < param_2) {
    uVar4 = *puVar2;
    uVar6 = puVar2[1];
    uStack_8 = 0;
    if (uVar4 != 0) {
      do {
        if ((((*(uint *)(uVar6 + 0x34) & 0x2000) != 0) && (*(int *)(uVar6 + 0x7c) == 0)) &&
           (iVar5 = FUN_0040a620(*(undefined4 *)(iVar3 + 0xd8),uVar6,*(undefined4 *)(iVar3 + 100),
                                 iVar1,iVar3,0,uVar4), iVar5 != 0)) {
          FUN_0040a980(iVar3,*(undefined4 *)(uVar6 + 0x44));
          FUN_0040a9d0(iVar3,iVar5);
          FUN_0045e7d0(*(undefined4 *)(iVar3 + 0x78),*(undefined4 *)(uVar6 + 0x44),
                       *(undefined4 *)(iVar5 + 0x78),*(undefined4 *)(iVar3 + 100));
          param_1 = param_1 + 1;
          if (param_2 <= param_1) {
            return;
          }
        }
        uVar4 = *puVar2;
        uStack_8 = uStack_8 + 1;
        uVar6 = uVar6 + 0x80;
      } while (uStack_8 < uVar4);
    }
  }
  return;
}

