
/* sweep */

undefined4 Replica_LineOfSightCheck(int param_1)

{
  int iVar1;
  undefined1 local_c [12];
  
  if (((DAT_005b9094 == 0) && (GLBL_SOME_CONTEXT != 0)) &&
     (((*(uint *)(param_1 + 0x104) ^ DAT_005b3304) & 0x1f) == 0)) {
    iVar1 = Coll_SphereCast(GLBL_SOME_CONTEXT + 0x34,param_1 + 0x34,local_c,
                            *(int *)(GLBL_SOME_CONTEXT + 100) + 0x14,GLBL_SOME_CONTEXT,param_1,0,
                            MiscObj_CollideFilter);
    if (iVar1 == 0) {
      *(undefined2 *)(param_1 + 0xce) = 0;
      return 1;
    }
    *(undefined2 *)(param_1 + 0xce) = 1;
  }
  return 0;
}

