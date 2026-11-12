
/* sweep */

void Starbase_FreeParts(int param_1)

{
  if (*(int *)(param_1 + 200) != 0) {
    Ent_UpdateSound3D(param_1);
  }
  return;
}

