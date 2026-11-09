
undefined4 __cdecl FUN_100038f0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  
  iVar3 = 0;
  piVar1 = (int *)((int)DAT_100199dc + 0xd6);
  puVar4 = DAT_100199dc;
  do {
    if (piVar1[0xc] != 0) {
      iVar2 = 4;
      bVar7 = true;
      piVar5 = piVar1;
      piVar6 = (int *)(param_1 + 0xd0);
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar7 = *piVar5 == *piVar6;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (bVar7);
      if (bVar7) {
        DAT_100199e0 = *puVar4;
        if (DAT_10019c9e != 0) {
          DAT_10019868 = *(undefined2 *)(puVar4 + 1);
        }
        return 1;
      }
    }
    iVar3 = iVar3 + 1;
    puVar4 = (undefined4 *)((int)puVar4 + 0x10e);
    piVar1 = (int *)((int)piVar1 + 0x10e);
    if (0x1f < iVar3) {
      return 0;
    }
  } while( true );
}

