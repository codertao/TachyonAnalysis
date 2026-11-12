
/* sweep */

void Input_ClearKeyboardState(undefined1 param_1)

{
  BOOL BVar1;
  BYTE local_100 [144];
  undefined1 local_70;
  
  BVar1 = GetKeyboardState(local_100);
  if (BVar1 != 0) {
    local_70 = param_1;
    SetKeyboardState(local_100);
  }
  return;
}

