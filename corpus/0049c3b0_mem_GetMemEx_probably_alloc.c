
LPCSTR mem_GetMemEx_probably_alloc(int size_bytes,int param_2,undefined4 param_3,LPCSTR done_for)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  LPCSTR pCVar5;
  int local_4;
  
  iVar1 = size_bytes;
  if (9 < GLBL_mem_log_lvl) {
    str_sprintf(&DAT_00603f80,s_mem_GetMemEx_____ld_bytes____s___0055d824,size_bytes,done_for);
    OutputDebugStringA(&DAT_00603f80);
  }
  piVar2 = *(int **)(PTR_global_mem_pool_root + 8);
  piVar4 = (int *)0x0;
  pCVar5 = done_for;
  while( true ) {
    piVar3 = piVar2;
    if (piVar3 == piVar4) {
      pCVar5 = pCVar5 + param_2;
    }
    else {
      size_bytes = piVar3[3];
      pCVar5 = (LPCSTR)((int)piVar3 + param_2 + *piVar3 + 0x1f & ~(param_2 - 1U));
    }
    if (size_bytes == 0) break;
    piVar2 = (int *)Mem_FindFree(piVar3,pCVar5 + -0x10,iVar1 + 0x10,&local_4);
    piVar4 = piVar3;
    if (local_4 != 0) {
      *(int *)(pCVar5 + -0x10) = iVar1;
      *(int *)(pCVar5 + -4) = piVar2[3];
      piVar3 = piVar2;
LAB_0049c4af:
      piVar3[3] = (int)(pCVar5 + -0x10);
      *(undefined4 *)(pCVar5 + -0xc) = *(undefined4 *)(PTR_global_mem_pool_root + 0xc);
      *(LPCSTR *)(pCVar5 + -8) = done_for;
      *(int *)(PTR_global_mem_pool_root + 0xc) = *(int *)(PTR_global_mem_pool_root + 0xc) + 1;
      return pCVar5;
    }
  }
  if ((LPCSTR)(*(int *)(PTR_global_mem_pool_root + 4) + *(int *)PTR_global_mem_pool_root) <
      pCVar5 + iVar1) {
    if (1 < GLBL_mem_log_lvl) {
      str_sprintf(&DAT_00603f80,s_mem_GetMemEx____Failed_to_alloca_0055d7f0,iVar1,done_for);
      OutputDebugStringA(&DAT_00603f80);
    }
    if (DAT_00563e90 != (code *)0x0) {
      (*DAT_00563e90)(iVar1);
    }
    return (LPCSTR)0x0;
  }
  *(int *)(pCVar5 + -0x10) = iVar1;
  pCVar5[-0xffffffff00000004] = '\0';
  pCVar5[-0xffffffff00000003] = '\0';
  pCVar5[-0xffffffff00000002] = '\0';
  pCVar5[-0xffffffff00000001] = '\0';
  goto LAB_0049c4af;
}

