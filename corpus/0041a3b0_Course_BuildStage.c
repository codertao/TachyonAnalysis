
/* sweep */

void Course_BuildStage(undefined4 param_1)

{
  if (GLBL_iter_cnt % 10 == 0) {
    overwrite_some_globals();
  }
  Course_PlaceTargetsSpaced(param_1);
  return;
}

