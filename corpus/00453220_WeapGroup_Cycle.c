
/* sweep */

void WeapGroup_Cycle(undefined4 param_1)

{
  WeapGroup_SelectNext(param_1);
  WeapGroup_Sync(param_1);
  WeapGroup_FindFirst();
  WeapGroup_Fire();
  return;
}

