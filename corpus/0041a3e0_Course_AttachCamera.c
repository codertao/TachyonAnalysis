
/* sweep: guess */

void Course_AttachCamera(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_2 == 0) {
      Ent_RemoveFromTargets();
      *(undefined4 *)(param_1 + 0xd4) = 0;
      return;
    }
    Ent_EnsureInQuadrant(param_1);
    Target_SelectNextOfType(1);
    *(int *)(param_1 + 0xd4) = param_2;
  }
  return;
}

