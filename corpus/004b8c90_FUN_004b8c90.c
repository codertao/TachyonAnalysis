
void FUN_004b8c90(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  puVar4 = param_1 + 2;
  if ((DAT_006af64c == 0) || (DAT_006af64c < *param_1)) {
    DAT_006af64c = *param_1;
    uVar1 = param_1[1];
    iVar2 = DAT_006af62c;
    while (iVar3 = iVar2, iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 8);
      if ((*(uint *)(iVar3 + 0x1c) != 0) && (*(uint *)(iVar3 + 0x1c) <= uVar1)) {
        FUN_004b7930(iVar3,&DAT_006af62c);
        FUN_004b78a0(&DAT_006af5e4,iVar3);
      }
    }
    for (; puVar4 < (uint *)((int)param_1 + param_2);
        puVar4 = (uint *)((int)puVar4 + (uint)*(ushort *)((int)puVar4 + 2))) {
      switch((short)*puVar4) {
      case 2:
        FUN_004b8a70(puVar4);
        break;
      default:
        FUN_004b8b90(puVar4);
        break;
      case 4:
        FUN_004b8c10(puVar4);
        break;
      case 6:
        FUN_004b8c70(puVar4);
        break;
      case 7:
        FUN_004b8ad0(puVar4);
      }
    }
  }
  return;
}

