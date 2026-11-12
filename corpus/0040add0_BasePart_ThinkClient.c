
/* sweep */

void BasePart_ThinkClient(int param_1)

{
  Starbase_FreeParts(param_1);
  BasePart_CheckNearPlayer(param_1,*(undefined4 *)(param_1 + 0xd4));
  return;
}

