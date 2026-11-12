
/* sweep */

undefined4 Replica_FindByLabel(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_005b3280;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if ((*(int *)(iVar1 + 0xf4) != 0) &&
       (iVar2 = Sped_MatchesLabel(*(int *)(iVar1 + 0xf4),param_1), iVar2 != 0)) break;
    iVar1 = *(int *)(iVar1 + 8);
  }
  return *(undefined4 *)(iVar1 + 0xf4);
}

