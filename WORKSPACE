workspace(name = "kythe_super")

local_repository(
    name = "io_kythe",
    path = "kythe",
)

load("@io_kythe//tools/build_rules/config:pkg_config.bzl", "pkg_config_package")

pkg_config_package(
    name = "eigen",
    modname = "eigen3",
)
