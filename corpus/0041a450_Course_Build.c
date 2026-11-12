
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Course_Build(uint max_cnt,undefined4 param_2)

{
  uint uVar1;
  
  seed_rng(0x2b0749c1);
  overwrite_some_globals();
  uVar1 = 0;
  _DAT_005b29c4 = 0;
  if (max_cnt != 0) {
    do {
      uVar1 = uVar1 + 1;
      GLBL_iter_cnt = uVar1;
      Course_BuildStage(param_2);
    } while (uVar1 < max_cnt);
  }
  return;
}

