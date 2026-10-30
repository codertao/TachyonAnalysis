
/* conditional sub-sector stage loader: for each stage record (buf+0x2c count / +0x30 offset, stride
   0x2c) eval a VarStore condition (sect/key@+0x10/14 vs value@+0x18, op@+0x1c, optional 2nd var
   @+0x20/24/28) and Spx_LoadSector(record=name@+0x0) the first match -> sectors morph by mission
   vars (bora05A/B) */

void __thiscall Spx_SelectSubSector(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int local_4;
  
  iVar1 = param_2;
  iVar4 = *(int *)(param_2 + 0x30);
  uVar3 = 0;
  local_4 = param_1;
  if (*(int *)(param_2 + 0x2c) == 0) {
    return;
  }
  do {
    iVar2 = Var_GetByIndex(DAT_005a6148,*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0x14),
                           &param_2);
    if (iVar2 != 0) {
      bVar5 = param_2 == *(int *)(iVar4 + 0x18);
      if ((*(int *)(iVar4 + 0x10) != -1) &&
         (iVar2 = Var_GetByIndex(DAT_005a6148,*(undefined4 *)(iVar4 + 0x20),
                                 *(undefined4 *)(iVar4 + 0x24),&local_4), iVar2 != 0)) {
        bVar6 = local_4 == *(int *)(iVar4 + 0x28);
        iVar2 = *(int *)(iVar4 + 0x1c);
        if (iVar2 == 0) {
          bVar5 = bVar5 && bVar6;
        }
        else if (iVar2 == 1) {
          bVar5 = bVar5 && !bVar6;
        }
        else if (iVar2 == 2) {
          bVar5 = bVar5 || bVar6;
        }
      }
      if (bVar5) {
        Spx_LoadSector(iVar4,param_3);
        return;
      }
    }
    uVar3 = uVar3 + 1;
    iVar4 = iVar4 + 0x2c;
    if (*(uint *)(iVar1 + 0x2c) <= uVar3) {
      return;
    }
  } while( true );
}

