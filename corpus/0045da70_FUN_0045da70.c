
void FUN_0045da70(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = FUN_004b87d0();
  if (iVar2 != 0) {
    FUN_0045d9f0(iVar2,param_1);
    uVar3 = 0xffffffff;
    pcVar4 = (char *)(iVar2 + 8);
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    local_18 = 0x800;
    local_14 = 0;
    FUN_004b87f0(iVar2,0x1110,~uVar3 + 10 & 0xfffffffe,&local_18);
  }
  return;
}

