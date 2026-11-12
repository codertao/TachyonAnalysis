
/* CRT: _output helper */

undefined4 _get_int_arg(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}

