/* Copyright (c) 2017 - 2026 LiteSpeed Technologies Inc.  See LICENSE. */


void
lsquic_ietf_full_conn_test_path (void);

void
lsquic_ietf_mini_conn_test_path (void);


int
main (void)
{
    lsquic_ietf_full_conn_test_path();
    lsquic_ietf_mini_conn_test_path();
    return 0;
}
