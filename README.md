# EPC - **E**PC **P**rocess **C**ompiler

A compiler for the EPC (Event-driven Process Chain) business process notation.

## Overview

EPC parses an EPC process definition — an XML description of events, tasks, and
connecting gateways/edges — and extracts it into an in-memory process model.

## Requirements

- CMake >= 3.30
- A C++17 compiler (developed against GCC 13)
- [Conan](https://conan.io/) >= 2.0

## Dependencies

Managed via Conan (see [conanfile.txt](conanfile.txt)):

- [rapidxml](https://rapidxml.sourceforge.net/) — XML parsing
- [argparse](https://github.com/p-ranav/argparse) — CLI argument parsing
- [spdlog](https://github.com/gabime/spdlog) — logging

## Building

```bash
conan install .
cmake --preset conan-release
cmake --build build/Release
```

The `main` executable is produced at `build/Release/main/main`.

## Usage

```bash
./build/Release/main/main <path-to-process-file>
```

For example:

```bash
./build/Release/main/main process.xml
```

Enable debug logging via spdlog's environment variable:

```bash
SPDLOG_LEVEL=debug ./build/Release/main/main process.xml
```

## Process file format

An EPC process is described as XML, e.g.:

```xml
<Process name="PCB Assembly">
  <StartEvent id="0" name="Start" />
  <Task id="1" name="Take PCB to capacitor station" />
  <XORSplit id="2" name="XORSplit" />
  <IntermediateEvent id="3" name="PCB arrived at the capacitor station" />
  <EndEvent id="8" name="End" />

  <Edge id="9" source="0" target="1" />
</Process>
```

Supported node types: `StartEvent`, `EndEvent`, `IntermediateEvent`, `Task`,
`XORSplit`/`XORJoin`, `ANDSplit`/`ANDJoin`, `ORSplit`/`ORJoin`, and `Edge` connectors.

## Project structure

- `main/` — CLI entry point
- `modules/argument_parser/` — CLI argument parsing wrapper
- `modules/file_reader/` — process file loading
- `modules/parser/models/` — the process data model (nodes, events, conjunctors, edges)
- `modules/parser/extractors/` — per-element-type XML extractors that populate the model
