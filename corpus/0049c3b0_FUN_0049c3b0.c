
uint FUN_0049c3b0(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int local_4;
  
  iVar1 = param_1;
  if (9 < DAT_005b9d10) {
    str_sprintf(&DAT_00603f80,s_mem_GetMemEx_____ld_bytes____s___0055d824,param_1,param_4);
    OutputDebugStringA(&DAT_00603f80);
  }
  piVar2 = *(int **)(PTR_DAT_0055d7cc + 8);
  piVar4 = (int *)0x0;
  uVar5 = param_4;
  while( true ) {
    piVar3 = piVar2;
    if (piVar3 == piVar4) {
      uVar5 = uVar5 + param_2;
    }
    else {
      param_1 = piVar3[3];
      uVar5 = (int)piVar3 + param_2 + *piVar3 + 0x1f & ~(param_2 - 1U);
    }
    if (param_1 == 0) break;
    piVar2 = (int *)FUN_0049ce30(piVar3,uVar5 - 0x10,iVar1 + 0x10,&local_4);
    piVar4 = piVar3;
    if (local_4 != 0) {
      *(int *)(uVar5 - 0x10) = iVar1;
      *(int *)(uVar5 - 4) = piVar2[3];
      piVar3 = piVar2;
LAB_0049c4af:
      piVar3[3] = uVar5 - 0x10;
      *(undefined4 *)(uVar5 - 0xc) = *(undefined4 *)(PTR_DAT_0055d7cc + 0xc);
      *(uint *)(uVar5 - 8) = param_4;
      *(int *)(PTR_DAT_0055d7cc + 0xc) = *(int *)(PTR_DAT_0055d7cc + 0xc) + 1;
      return uVar5;
    }
  }
  if ((uint)(*(int *)(PTR_DAT_0055d7cc + 4) + *(int *)PTR_DAT_0055d7cc) < uVar5 + iVar1) {
    if (1 < DAT_005b9d10) {
      str_sprintf(&DAT_00603f80,s_mem_GetMemEx____Failed_to_alloca_0055d7f0,iVar1,param_4);
      OutputDebugStringA(&DAT_00603f80);
    }
    if (DAT_00563e90 != (code *)0x0) {
      (*DAT_00563e90)(iVar1);
    }
    return 0;
  }
  *(int *)(uVar5 - 0x10) = iVar1;
  *(undefined4 *)(uVar5 - 4) = 0;
  goto LAB_0049c4af;
}

