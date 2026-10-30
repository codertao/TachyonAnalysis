
/* resolve position (transform vtable +0x30 or default +0x34..0x54) then Sped_Spawn */

undefined4
Sped_SpawnByClass(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  short *psVar3;
  undefined4 uVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar4 = param_4;
  psVar3 = (short *)Sped_FindDef(param_4,param_2,&param_2);
  if (psVar3 == (short *)0x0) {
    return 0;
  }
  if ((*psVar3 != 3) && (*psVar3 != 1)) {
    return 0;
  }
  iVar1 = *(int *)(psVar3 + 0x14);
  if (iVar1 == 0) {
    return 0;
  }
  pcVar2 = *(code **)(*(int *)(iVar1 + 0x8c) + 0x30);
  if (pcVar2 == (code *)0x0) {
    local_18 = *(undefined4 *)(iVar1 + 0x34);
    local_14 = *(undefined4 *)(iVar1 + 0x38);
    local_10 = *(undefined4 *)(iVar1 + 0x3c);
    local_c = *(undefined4 *)(iVar1 + 0x4c);
    local_8 = *(undefined4 *)(iVar1 + 0x50);
    local_4 = *(undefined4 *)(iVar1 + 0x54);
  }
  else {
    (*pcVar2)(iVar1,&local_18,0);
  }
  uVar4 = Sped_Spawn(param_1,0,param_3,uVar4,&local_18);
  return uVar4;
}

