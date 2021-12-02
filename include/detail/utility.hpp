namespace chcnv::detail {
    // if consteval, stop compilation otherwise, stop the program.
    [[noreturn]] constexpr void panic() noexcept;
}