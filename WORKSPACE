workspace(name = "kythe_super")

local_repository(
    name = "io_kythe",
    path = "kythe",
)

load("@io_kythe//tools/build_rules/config:pkg_config.bzl", "pkg_config_package")
load("@io_kythe//tools/build_rules/config:system.bzl", "cc_system_package")

pkg_config_package(
    name = "eigen",
    modname = "eigen3",
)

cc_system_package(
    name = "test_lib",
    modname = "test_lib",
    envvar = "TEST_LIB",
)
