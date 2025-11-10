from flask import Flask, request, Response
import subprocess

app = Flask(__name__)

@app.route("/")
def home():
    return open("index.html", encoding="utf-8").read()

@app.route("/run_mst", methods=["POST"])
def run_mst():
    data = request.data.decode("utf-8")
    process = subprocess.Popen(
        ["./mst_backend"], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE
    )
    output, error = process.communicate(input=data.encode("utf-8"))
    if error:
        return Response(error.decode("utf-8"), status=500)
    return Response(output.decode("utf-8"), mimetype="text/plain")

if __name__ == "__main__":
    app.run(port=5000, debug=True)
