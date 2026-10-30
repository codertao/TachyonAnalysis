
undefined8 __fastcall FUN_004cb481(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 in_EAX;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  char *pcVar6;
  undefined2 *puVar7;
  char *pcVar8;
  
  if (param_3 == 0) {
    pcVar6 = &DAT_004dfad0;
    pcVar8 = &DAT_004df8d0;
    iVar3 = 0x200;
    do {
      cVar2 = *pcVar6;
      if (cVar2 < '\0') {
        cVar2 = -cVar2;
      }
      *pcVar8 = cVar2;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
      iVar4 = iVar3 + -1;
      bVar1 = 0 < iVar3;
      iVar3 = iVar4;
    } while (iVar4 != 0 && bVar1);
  }
  else {
    puVar5 = (undefined2 *)&DAT_004dfad0;
    puVar7 = (undefined2 *)&DAT_004df8d0;
    for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return CONCAT44(param_2,in_EAX);
}

