
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* run the script once (event entry at script+0x40) */

undefined8 MusScr_Run(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  
  puVar4 = PTR_DAT_0055ee58;
  puVar3 = PTR_DAT_0055ee54;
  DAT_006695a4 = param_1;
  DAT_006695b0 = *(undefined4 *)(param_1 + 0xc);
  DAT_00669480 = *(undefined4 *)(param_1 + 0x10);
  DAT_0066a62c = *(int *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  bVar1 = *(byte *)(param_1 + 0x20);
  iVar5 = param_1;
  _DAT_0066a624 = uVar2;
  if (bVar1 != 0) {
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined4 *)puVar4 = *(undefined4 *)(param_1 + 0x18);
    *(uint *)puVar3 = (uint)bVar1;
    *(undefined4 *)(puVar3 + 4) = 0;
    iVar6 = *(int *)(DAT_0066a62c + 0x40);
    iVar5 = 0;
    if (iVar6 != 0) goto LAB_004b5bf4;
  }
  iVar6 = *(int *)(iVar5 + 0x18);
LAB_004b5bf4:
  MusScr_Interp();
  *(int *)(DAT_006695a4 + 0x18) = iVar6;
  return CONCAT44(uVar2,param_1);
}

