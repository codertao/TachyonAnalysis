
void maybe_log_something(char *param_1,undefined4 param_2)

{
  void *node;
  
  if (param_1 != (char *)0x0) {
    node = Pool_Alloc((Pool *)&DAT_005b01ac);
    if (node != (void *)0x0) {
      _strncpy((char *)((int)node + 0x1c),param_1,0x80);
      *(undefined4 *)((int)node + 0xb0) = param_2;
      List_Append(node,(void **)&DAT_005b01d4);
    }
  }
  return;
}

